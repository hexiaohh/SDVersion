//
//  SDVersion.h
//  SDVersion
//
//  Copyright (c) 2015 Sebastian Dobrincu. All rights reserved.
// 测试一下   修改 fork 后的内容

#ifndef SDVersion_h
#define SDVersion_h

#if (TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE)
	#import "SDiOSVersion.h"
	#define SDVersion SDiOSVersion
#else
	#import "SDMacVersion.h"
	#define SDVersion SDMacVersion
#endif

#endif
