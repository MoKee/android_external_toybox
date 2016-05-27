#define CP_mode                                     0
#define _CP_mode                                    (1<<0)
#define CP_ownership                                1
#define _CP_ownership                               (1<<1)
#define CP_timestamps                               2
#define _CP_timestamps                              (1<<2)
#define CP_context                                  3
#define _CP_context                                 (1<<3)
#define CP_xattr                                    4
#define _CP_xattr                                   (1<<4)
#define PS_PID                                      0
#define _PS_PID                                     (1<<0)
#define PS_PPID                                     1
#define _PS_PPID                                    (1<<1)
#define PS_PRI                                      2
#define _PS_PRI                                     (1<<2)
#define PS_NI                                       3
#define _PS_NI                                      (1<<3)
#define PS_ADDR                                     4
#define _PS_ADDR                                    (1<<4)
#define PS_SZ                                       5
#define _PS_SZ                                      (1<<5)
#define PS_RSS                                      6
#define _PS_RSS                                     (1<<6)
#define PS_PGID                                     7
#define _PS_PGID                                    (1<<7)
#define PS_VSZ                                      8
#define _PS_VSZ                                     (1<<8)
#define PS_MAJFL                                    9
#define _PS_MAJFL                                   (1<<9)
#define PS_MINFL                                    10
#define _PS_MINFL                                   (1<<10)
#define PS_PR                                       11
#define _PS_PR                                      (1<<11)
#define PS_PSR                                      12
#define _PS_PSR                                     (1<<12)
#define PS_RTPRIO                                   13
#define _PS_RTPRIO                                  (1<<13)
#define PS_SCH                                      14
#define _PS_SCH                                     (1<<14)
#define PS_CPU                                      15
#define _PS_CPU                                     (1<<15)
#define PS_TID                                      16
#define _PS_TID                                     (1<<16)
#define PS_TCNT                                     17
#define _PS_TCNT                                    (1<<17)
#define PS_BIT                                      18
#define _PS_BIT                                     (1<<18)
#define PS_COMM                                     19
#define _PS_COMM                                    (1<<19)
#define PS_TTY                                      20
#define _PS_TTY                                     (1<<20)
#define PS_WCHAN                                    21
#define _PS_WCHAN                                   (1<<21)
#define PS_LABEL                                    22
#define _PS_LABEL                                   (1<<22)
#define PS_NAME                                     23
#define _PS_NAME                                    (1<<23)
#define PS_TNAME                                    24
#define _PS_TNAME                                   (1<<24)
#define PS_COMMAND                                  25
#define _PS_COMMAND                                 (1<<25)
#define PS_CMDLINE                                  26
#define _PS_CMDLINE                                 (1<<26)
#define PS_ARGS                                     27
#define _PS_ARGS                                    (1<<27)
#define PS_CMD                                      28
#define _PS_CMD                                     (1<<28)
#define PS_UID                                      29
#define _PS_UID                                     (1<<29)
#define PS_USER                                     30
#define _PS_USER                                    (1<<30)
#define PS_RUID                                     31
#define _PS_RUID                                    (1<<31)
#define PS_RUSER                                    32
#define _PS_RUSER                                   (1LL<<32)
#define PS_GID                                      33
#define _PS_GID                                     (1LL<<33)
#define PS_GROUP                                    34
#define _PS_GROUP                                   (1LL<<34)
#define PS_RGID                                     35
#define _PS_RGID                                    (1LL<<35)
#define PS_RGROUP                                   36
#define _PS_RGROUP                                  (1LL<<36)
#define PS_TIME                                     37
#define _PS_TIME                                    (1LL<<37)
#define PS_ELAPSED                                  38
#define _PS_ELAPSED                                 (1LL<<38)
#define PS_TIME_                                    39
#define _PS_TIME_                                   (1LL<<39)
#define PS_C                                        40
#define _PS_C                                       (1LL<<40)
#define PS__VSZ                                     41
#define _PS__VSZ                                    (1LL<<41)
#define PS__MEM                                     42
#define _PS__MEM                                    (1LL<<42)
#define PS__CPU                                     43
#define _PS__CPU                                    (1LL<<43)
#define PS_VIRT                                     44
#define _PS_VIRT                                    (1LL<<44)
#define PS_RES                                      45
#define _PS_RES                                     (1LL<<45)
#define PS_SHR                                      46
#define _PS_SHR                                     (1LL<<46)
#define PS_READ                                     47
#define _PS_READ                                    (1LL<<47)
#define PS_WRITE                                    48
#define _PS_WRITE                                   (1LL<<48)
#define PS_IO                                       49
#define _PS_IO                                      (1LL<<49)
#define PS_DREAD                                    50
#define _PS_DREAD                                   (1LL<<50)
#define PS_DWRITE                                   51
#define _PS_DWRITE                                  (1LL<<51)
#define PS_SWAP                                     52
#define _PS_SWAP                                    (1LL<<52)
#define PS_DIO                                      53
#define _PS_DIO                                     (1LL<<53)
#define PS_STIME                                    54
#define _PS_STIME                                   (1LL<<54)
#define PS_F                                        55
#define _PS_F                                       (1LL<<55)
#define PS_S                                        56
#define _PS_S                                       (1LL<<56)
#define PS_STAT                                     57
#define _PS_STAT                                    (1LL<<57)
#define PS_PCY                                      58
#define _PS_PCY                                     (1LL<<58)
#define KEY_UP                                       0
#define _KEY_UP                                      (1<<0)
#define KEY_DOWN                                     1
#define _KEY_DOWN                                    (1<<1)
#define KEY_RIGHT                                    2
#define _KEY_RIGHT                                   (1<<2)
#define KEY_LEFT                                     3
#define _KEY_LEFT                                    (1<<3)
#define KEY_PGUP                                     4
#define _KEY_PGUP                                    (1<<4)
#define KEY_PGDN                                     5
#define _KEY_PGDN                                    (1<<5)
#define KEY_HOME                                     6
#define _KEY_HOME                                    (1<<6)
#define KEY_END                                      7
#define _KEY_END                                     (1<<7)
#define KEY_INSERT                                   8
#define _KEY_INSERT                                  (1<<8)
#define KEY_F1                                       9
#define _KEY_F1                                      (1<<9)
#define KEY_F2                                       10
#define _KEY_F2                                      (1<<10)
#define KEY_F3                                       11
#define _KEY_F3                                      (1<<11)
#define KEY_F4                                       12
#define _KEY_F4                                      (1<<12)
#define KEY_F5                                       13
#define _KEY_F5                                      (1<<13)
#define KEY_F6                                       14
#define _KEY_F6                                      (1<<14)
#define KEY_F7                                       15
#define _KEY_F7                                      (1<<15)
#define KEY_F8                                       16
#define _KEY_F8                                      (1<<16)
#define KEY_F9                                       17
#define _KEY_F9                                      (1<<17)
#define KEY_SUP                                      18
#define _KEY_SUP                                     (1<<18)
#define KEY_AUP                                      19
#define _KEY_AUP                                     (1<<19)
#define KEY_CUP                                      20
#define _KEY_CUP                                     (1<<20)
#define KEY_SDOWN                                    21
#define _KEY_SDOWN                                   (1<<21)
#define KEY_ADOWN                                    22
#define _KEY_ADOWN                                   (1<<22)
#define KEY_CDOWN                                    23
#define _KEY_CDOWN                                   (1<<23)
#define KEY_SRIGHT                                   24
#define _KEY_SRIGHT                                  (1<<24)
#define KEY_ARIGHT                                   25
#define _KEY_ARIGHT                                  (1<<25)
#define KEY_CRIGHT                                   26
#define _KEY_CRIGHT                                  (1<<26)
#define KEY_SLEFT                                    27
#define _KEY_SLEFT                                   (1<<27)
#define KEY_ALEFT                                    28
#define _KEY_ALEFT                                   (1<<28)
#define KEY_CLEFT                                    29
#define _KEY_CLEFT                                   (1<<29)
#define KEY_SF1                                      30
#define _KEY_SF1                                     (1<<30)
#define KEY_AF1                                      31
#define _KEY_AF1                                     (1<<31)
#define KEY_CF1                                      32
#define _KEY_CF1                                     (1LL<<32)
