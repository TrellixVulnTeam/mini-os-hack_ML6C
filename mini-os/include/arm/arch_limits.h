#ifndef __ARCH_LIMITS_H__
#define __ARCH_LIMITS_H__

#include <arch_mm.h>

#if defined(__arm__)
#define __STACK_SIZE_PAGE_ORDER	2
#elif defined(__aarch64__)
#define __STACK_SIZE_PAGE_ORDER	4
#endif

#define __PAGE_SHIFT      12

#ifdef __ASSEMBLY__
#define __PAGE_SIZE       (1 << __PAGE_SHIFT)
#else
#ifdef __x86_64__
#define __PAGE_SIZE       (1UL << __PAGE_SHIFT)
#else
#define __PAGE_SIZE       (1ULL << __PAGE_SHIFT)
#endif
#endif

#define __STACK_SIZE (4 * PAGE_SIZE)

#endif
