//
//  const.h
//  AFNetWorking封装
//
//  Created by Kai Liu on 16/6/22.
//  Copyright © 2016年 Kai Liu. All rights reserved.
//

#ifndef const_h
#define const_h

/**baseUrl*/


/**完整url*/
//http://apis.baidu.com/apistore/idservice/id

#define BaseURL @"http://apis.baidu.com/apistore"

#import "UIImage+compressIMG.h"



/**国内天气预报融合版－－－－－apikey*/

#define apikey  @"82428a4618b6aa313be6914d727cb9b7"



/**Dubug相关*/

#ifdef DEBUG
#define LKLog(format,...)  NSLog((@"[函数名:%s]\n" "[行号:%d]\n" format),__FUNCTION__,__LINE__,##__VA_ARGS__)
#else
#define MyLog(...)
#endif



#endif /* const_h */
