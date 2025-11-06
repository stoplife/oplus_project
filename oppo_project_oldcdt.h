/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2018-2020 Oplus. All rights reserved.
 */
#ifndef _OPPO_PROJECT_OLDCDT_H_
#define _OPPO_PROJECT_OLDCDT_H_

enum{
    HW_VERSION__UNKNOWN,
    HW_VERSION__10,
    HW_VERSION__11,
    HW_VERSION__12,
    HW_VERSION__13,
    HW_VERSION__14,
    HW_VERSION__15,
    HW_VERSION__16,
    HW_VERSION__17,
    HW_VERSION__18,
    HW_VERSION__19,
    HW_VERSION__20,
    HW_VERSION__21,
    HW_VERSION__22,
};

enum{
    RF_VERSION__UNKNOWN,
    RF_VERSION__11,
    RF_VERSION__12,
    RF_VERSION__13,
    RF_VERSION__14,
    RF_VERSION__15,
    RF_VERSION__16,
    RF_VERSION__17,
    RF_VERSION__18,
    RF_VERSION__19,
    RF_VERSION__1A,
};

#define GET_PCB_VERSION_OLDCDT() (get_PCB_Version_oldcdt())
#define GET_PCB_VERSION_STRING_OLDCDT() (get_PCB_Version_String_oldcdt())

#define GET_MODEM_VERSION_OLDCDT() (get_Modem_Version_oldcdt())
#define GET_OPERATOR_VERSION_OLDCDT() (get_Operator_Version_oldcdt())

enum OPPO_PROJECT_OLDCDT {
    OPPO_UNKOWN = 0,
    OPPO_17107 = 17107,
    OPPO_17108 = 17108,
    OPPO_17109 = 17109,
    OPPO_17127 = 17127,
    OPPO_17128 = 17128,
};

enum OPPO_OPERATOR {
    OPERATOR_UNKOWN                   	= 0,
    OPERATOR_OPEN_MARKET                = 1,
    OPERATOR_CHINA_MOBILE               = 2,
    OPERATOR_CHINA_UNICOM               = 3,
    OPERATOR_CHINA_TELECOM              = 4,
    OPERATOR_FOREIGN                    = 5,
    OPERATOR_FOREIGN_WCDMA              = 6,
    OPERATOR_FOREIGN_RESERVED           = 7,
    OPERATOR_ALL_CHINA_CARRIER          = 8,
    OPERATOR_ALL_CHINA_CARRIER_MOBILE   = 9,
    OPERATOR_ALL_CHINA_CARRIER_UNICOM   = 10,
};

typedef struct
{
    unsigned int    nProject;
    unsigned int    nModem;
    unsigned int    nOperator;
    unsigned int    nPCBVersion;
    unsigned int    nENGVersion;
    unsigned int    isConfidential;
} ProjectInfoCDTType_oldcdt;

unsigned int get_project_oldcdt(void);
unsigned int is_project_oldcdt(int project );
unsigned int get_PCB_Version_oldcdt(void);
unsigned int get_Modem_Version_oldcdt(void);
unsigned int get_Operator_Version_oldcdt(void);
unsigned int get_eng_version_oldcdt(void);
int is_confidential_oldcdt(void);
bool oppo_daily_build_oldcdt(void);
int oppo_project_init_oldcdt(void);

#endif
