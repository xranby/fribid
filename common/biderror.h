/*

  Copyright (c) 2009-2011 Samuel Lidén Borell <samuel@kodafritt.se>
 
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
  
  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.
  
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.

*/

#ifndef __BIDERROR_H__
#define __BIDERROR_H__

typedef enum {
    BIDERR_OK =                  0,
    BIDERR_InternalError =       1,
    BIDERR_UserCancel =       8002,
    BIDERR_InvalidParameter = 8004,
    BIDERR_InvalidAction =    8008,
    BIDERR_InvalidPIN =       8013,
    BIDERR_InvalidValue =     8014,
    BIDERR_NotSSL =           8015,
    BIDERR_MissingParameter = 8016,
    BIDERR_ValueTooLong =     8018,
    BIDERR_HostnameIsIP =     8019,
    BIDERR_BlockedPIN =       8102,
    
    // Errors from regutil
    RUERR_InvalidParameter =   640,
    RUERR_InvalidValue =      1028,
    RUERR_UserCancel =        1034,
    // KeySize not set = 1024
    // InitRequest('cmc') not called = 1025
    // KeyUsage not set = 1025
    // InitRequest('pkcs10') not called = 1030
} BankIDError;

#endif

