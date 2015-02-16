
// Copyright 2015  Malcolm Inglis <http://minglis.id.au>
//
// This file is part of Libtypes.
//
// Libtypes is free software: you can redistribute it and/or modify it under
// the terms of the GNU Affero General Public License as published by the Free
// Software Foundation, either version 3 of the License, or (at your option)
// any later version.
//
// Libtypes is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for
// more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with Libtypes. If not, see <https://gnu.org/licenses/>.


#ifndef LIBTYPES_TYPES_H
#define LIBTYPES_TYPES_H


#include <stdbool.h>        // @export
#include <stddef.h>         // @export
#include <stdint.h>         // @export

#if __STDC_VERSION__ >= 201112L
#include <stdnoreturn.h>    // @export
#else
#define noreturn
#endif


typedef     signed char             schar;
typedef     unsigned char           uchar;
typedef     unsigned short          ushort;
typedef     unsigned int            uint;
typedef     unsigned long           ulong;
typedef     long long               llong;
typedef     unsigned long long      ullong;
typedef     long double             ldouble;


// <stdbool.h> defines `bool` as a macro for `_Bool`, which messes up code
// generation - we want to be able to generate `bool` functions with
// consistently-styled names. So instead, we define our own `bool` type:
#undef bool
typedef _Bool bool;


// An ordering type, representing the relations "less than", "equal to", and
// "greater than".
typedef schar ord;
#define LT -1
#define EQ 0
#define GT 1


// @public start

//                        <type>            <type name>,    <func name>
#define BOOL_TYPE       ( bool,             bool,           bool )
#define ORD_TYPE        ( ord,              ord,            ord )

#define CHAR_TYPE       ( char,             char,           char )
#define SCHAR_TYPE      ( schar,            schar,          schar )
#define UCHAR_TYPE      ( uchar,            uchar,          uchar )
#define SHORT_TYPE      ( short,            short,          short )
#define USHORT_TYPE     ( ushort,           ushort,         ushort )
#define INT_TYPE        ( int,              int,            int )
#define UINT_TYPE       ( uint,             uint,           uint )
#define LONG_TYPE       ( long,             long,           long )
#define ULONG_TYPE      ( ulong,            ulong,          ulong )
#define LLONG_TYPE      ( llong,            llong,          llong )
#define ULLONG_TYPE     ( ullong,           ullong,         ullong )

#define FLOAT_TYPE      ( float,            float,          float )
#define DOUBLE_TYPE     ( double,           double,         double )
#define LDOUBLE_TYPE    ( ldouble,          ldouble,        ldouble )

#define INT8_TYPE       ( int8_t,           int8,           int8 )
#define INT16_TYPE      ( int16_t,          int16,          int16 )
#define INT32_TYPE      ( int32_t,          int32,          int32 )
#define INTMAX_TYPE     ( intmax_t,         intmax,         intmax )

#define UINT8_TYPE      ( uint8_t,          uint8,          uint8 )
#define UINT16_TYPE     ( uint16_t,         uint16,         uint16 )
#define UINT32_TYPE     ( uint32_t,         uint32,         uint32 )
#define UINTMAX_TYPE    ( uintmax_t,        uintmax,        uintmax )

#define PTRDIFF_TYPE    ( ptrdiff_t,        ptrdiff,        ptrdiff )
#define WCHAR_TYPE      ( wchar_t,          wchar,          wchar )
#define SIZE_TYPE       ( size_t,           size,           size )

#define PTR_TYPE        ( void *,           ptr,            ptr )
#define CONSTPTR_TYPE   ( void const *,     constptr,       constptr )

#define STR_TYPE        ( char *,           str,            str )
#define CONSTSTR_TYPE   ( char const *,     conststr,       conststr )

// @public end


#endif

