#ifndef THC_DEVICE_ALLOCATOR_INC
#define THC_DEVICE_ALLOCATOR_INC

#if (__cplusplus >= 201103L) || (defined(_MSC_VER) && defined(__cplusplus))
#include <mutex>
#endif

#include "THCGeneral.h"
#include "THCStream.h"

THC_API THCDeviceAllocator* THCCachingAllocator_get(void);
THC_API void* THCCachingAllocator_getBaseAllocation(void *ptr, size_t *size);
THC_API void THCCachingAllocator_recordStream(void *ptr, THCStream* stream);
THC_API cudaError_t THCCachingAllocator_emptyCache(void);

#if (__cplusplus >= 201103L) || (defined(_MSC_VER) && defined(__cplusplus))
THC_API std::mutex* THCCachingAllocator_getCudaFreeMutex();
#endif

#endif
