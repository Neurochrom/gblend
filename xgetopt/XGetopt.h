// XGetopt.h  Version 1.2
//
// Author:  Hans Dietrich
//          hdietrich2@hotmail.com
//
// This software is released into the public domain.
// You are free to use it in any way you like.
//
// This software is provided "as is" with no expressed
// or implied warranty.  I accept no liability for any
// damage or loss of business that this software may cause.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef XGETOPT_H
#define XGETOPT_H

#include <stdio.h>
#include <tchar.h>

extern int optind, opterr;
extern TCHAR *optarg;

int getopt(int argc, TCHAR *argv[], const TCHAR *optstring);

#endif //XGETOPT_H
