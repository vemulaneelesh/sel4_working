/* @LICENSE(NICTA) */ 

/* This header was generated by kernel/tools/syscall_header_gen.py.
 *
 * To add a system call number, edit kernel/include/api/syscall.xml
 *
 */
#ifndef __LIBSEL4_SYSCALL_H
#define __LIBSEL4_SYSCALL_H

#include <autoconf.h>

typedef enum {
    seL4_SysCall = -1,
    seL4_SysReplyRecv = -2,
    seL4_SysSend = -3,
    seL4_SysNBSend = -4,
    seL4_SysRecv = -5,
    seL4_SysReply = -6,
    seL4_SysYield = -7,
    seL4_SysNBRecv = -8,
#if defined DEBUG
    seL4_SysDebugPutChar = -9,
    seL4_SysDebugHalt = -10,
    seL4_SysDebugCapIdentify = -11,
    seL4_SysDebugSnapshot = -12,
    seL4_SysDebugNameThread = -13,
#endif /* defined DEBUG */
#if defined DANGEROUS_CODE_INJECTION
    seL4_SysDebugRun = -14,
#endif /* defined DANGEROUS_CODE_INJECTION */
#if CONFIG_MAX_NUM_TRACE_POINTS > 0
    seL4_SysBenchmarkResetLog = -15,
    seL4_SysBenchmarkDumpLog = -16,
    seL4_SysBenchmarkLogSize = -17,
    seL4_SysBenchmarkFinalizeLog = -18,
#endif /* CONFIG_MAX_NUM_TRACE_POINTS > 0 */
    SEL4_FORCE_LONG_ENUM(seL4_Syscall_ID)
} seL4_Syscall_ID;

#endif /* __ARCH_API_SYSCALL_H */