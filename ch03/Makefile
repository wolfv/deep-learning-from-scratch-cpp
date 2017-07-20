CXX      = g++
CXXFLAGS = -std=c++14 -g -Wall -Wextra
INCLUDES = -Iinclude \
-I/usr/local/include/xtensor-blas/flens

TGTS   = `ls test/test_*.cc | sed -e s/.cc//`
TGT   ?= test/test_nn_3layers
#TGT  ?= test/test_relu
#TGT  ?= test/test_xtensor
#SRCS  = src/relu.cc
SRCS += $(TGT).cc
BIN   = $(TGT)
OBJS  = $(SRCS:.cc=.o)
LIBS  =

compile_all:
	@for target in $(TGTS); do \
	make TGT=$${target} compile; \
	done

compile: $(BIN)

test_all:
	@for target in $(TGTS); do \
	make TGT=$${target} test; \
	done

test: $(BIN)
	./$(BIN)

$(BIN): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) -o $@ $(LIBS)

.cc.o: $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(BIN) $(OBJS)

clean_all:
	@for target in $(TGTS); do \
	make TGT=$${target} clean; \
	done

.PHONY: test test_all clean clean_all
