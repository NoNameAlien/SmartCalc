PROJECT_NAME = s21_SmartCalc_v1
CFILES = s21_SmartCalc.c
CTESTS = test.c
CFLAGS = -Wall -Wextra -Werror
CHECKFLAGS = $(shell pkg-config --cflags --libs check)
BUILD_DIR = ../build

all: clean install

gcc:
	gcc s21_SmartCalc.c -lm
	./a.out
	rm -rf ./a.out
 
install:
	cd QSmartCalc && cmake -S . -B ../$(BUILD_DIR) -G "Unix Makefiles" && cd ..
	make -C $(BUILD_DIR)
	cd $(BUILD_DIR) && rm -rf CMakeFiles cmake_install.cmake CMakeCache.txt Makefile s21_SmartCalc_autogen    
	open $(BUILD_DIR)	

uninstall:
	rm -rf $(BUILD_DIR)

rebuild: uninstall install

test: clean s21_SmartCalc.a
	gcc $(CFLAGS) $(CTESTS) s21_SmartCalc.a -o s21_test $(CHECKFLAGS)
	./s21_test

gcov_report: clean s21_SmartCalc.a
	gcc $(CFLAGS) -fprofile-arcs -ftest-coverage $(CTESTS) $(CFILES) -o s21_test $(CHECKFLAGS)
	./s21_test
	rm -rf *test_s21_SmartCalc.g*
	lcov -d ./ --capture --output-file s21_test.info
	genhtml s21_test.info --output-directory s21_report
	open ./s21_report/index.html

lcov: 
	brew install lcov

s21_SmartCalc.a:
	gcc $(CFLAGS) -c $(CFILES)
	ar -src s21_SmartCalc.a *.o
	ranlib s21_SmartCalc.a

format:
	cp ../materials/linters/.clang-format ./
	clang-format -i *.c *.h QSmartCalc/*.cpp QSmartCalc/*.h 
	rm .clang-format

style:
	cp ../materials/linters/.clang-format ./
	clang-format -n *.c *.h QSmartCalc/*.cpp QSmartCalc/*.h 
	rm .clang-format

dist:
	make clean
	cd ..; rm -rf $(PROJECT_NAME).tar.gz $(PROJECT_NAME)
	cd ..; mkdir $(PROJECT_NAME)
	cd ..; cp -r ./src/* $(PROJECT_NAME)
	cd ..; tar -cvf $(PROJECT_NAME).tar.gz $(PROJECT_NAME)

dvi:
	open DVI.html

clean:
	rm -rf build*
	rm -rf $(BUILD_DIR)
	rm -rf *.o  *.a
	rm -rf s21_test
	rm -rf *.gcno *.gcda *.info
	rm -rf s21_report
	rm -rf ../$(PROJECT_NAME)*
