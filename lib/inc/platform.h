#ifndef platform_h
#define platform_h

#ifndef EXTERN_C
  #ifdef __cplusplus
    #define EXTERN_C extern "C"
  #else
    #define EXTERN_C extern
  #endif
#endif

#include <stdlib.h>

EXTERN_C void *rwt_malloc(size_t size);
EXTERN_C void *rwt_calloc(size_t num, size_t size);
EXTERN_C void rwt_free(void *ptr);

#endif
