# autoconf demo

> static library && dync libray

## static library

> with noinst_LIBRARIES

```bash
../lib
```

## dync library

> with lib_LTLIBRARIES && configure.ac add AC_PROG_LIBTOOL

```bash
../dynclib
```

## How to run

```bash
../lib/configure  && ../lib/make
../dynclib/configure && ../dynclib/make && ../dynclib/make install
./configure && make && ./userloginapp
```