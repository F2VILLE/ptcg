CC=g++
SRCDIR=src 
OBJDIR=obj 
CFLAGS=-Wall -Wextra -O2 -Iinclude
OUT=ptcg
SRCS=$(wildcard $(SRCDIR)/**/*.cpp)
OBJS=$(patsubst $(SRCDIR)/**/%.cpp,$(OBJDIR)/%.o,$(SRCS))

all: $(OUT)

$(OUT): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(OUT)

.PHONY: all clean