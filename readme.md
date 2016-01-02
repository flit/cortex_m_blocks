Blocks support for Cortex-M microcontrollers

### Introduction

The Clang compiler has an extension called Blocks to support true closures for the C family of
languages. The Clang compiler-rt library includes the sources for the required runtime support
library in the lib/BlocksRuntime directory. These files have been extracted and modified to simplify
the runtime and make it more suitable for small microcontrollers.

There's really nothing in particular that ties the runtime to Cortex-M devices, except the test code.
It should be usably on any microcontroller architecture supported by Clang.

### Changes

The following changes have been made from the original compiler-rt BlocksRuntime, mostly in order to
reduce code size.

- Removed GC support.
- Changed `_NSConcreteXBlock` globals to be a single byte each instead of 128 bytes each, saving 762 bytes of RAM.
- Added `TARGET_BARE_METAL` macro to config.h. This is used in the runtime.c file.
- Supplied a simple implementation of `OSAtomicCompareAndSwapInt()`.

Further optimizations are possible.


### Test

The `test` directory contains a simple blocks test program. It builds for the NXP KL28T/Z device. There is a GNU ARM Eclipe project in the root of the repository.


### Links

Blocks documentation:
- http://clang.llvm.org/docs/LanguageExtensions.html#blocks
- http://clang.llvm.org/docs/BlockLanguageSpec.html
- http://developer.apple.com/library/mac/documentation/Cocoa/Conceptual/Blocks
- http://developer.apple.com/library/mac/documentation/Cocoa/Conceptual/Blocks/Blocks.pdf

blocksruntime project on GitHub:
- https://github.com/mackyle/blocksruntime


### License

BlocksRuntime is part of LLVM's compiler_rt project, which is dual licensed under both the University of Illinois
"BSD-Like" license and the MIT license. See the blocksruntime/LICENSE.TXT file for the full license.

