
.PHONY: all
all: test

.PHONY: test
test:
	cd test && $(MAKE)

