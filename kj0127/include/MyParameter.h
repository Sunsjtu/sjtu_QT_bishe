#ifndef MYPARAMETER_H
#define MYPARAMETER_H

#endif // MYPARAMETER_H

#include "AdvMotApi.h"
//#include"windows.h"
//#include "AdvMotDev.h"
//#include "AdvMotDrv.h"
//#include "AdvMotErr.h"
//#include "AdvMotPropID.h"

HAND pDevHandle;
HAND pAxisHandle[32];//轴的Handle
HAND pGroupHandle;//群组Handle
U32 u32DevSerisNum;//设备编号
U32 u32AxisCount;//轴数量
U32 u32Return;//函数返回值


I32 iComboXYZ; //控制调试部分XYZ轴切换相关
bool bPosOrDistance; //绝对位置or相对位置
