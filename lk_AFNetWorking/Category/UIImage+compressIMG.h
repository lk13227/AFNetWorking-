//
//  UIImage+compressIMG.h
//  AFNetWorking封装
//
//  Created by Kai Liu on 16/6/22.
//  Copyright © 2016年 Kai Liu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (compressIMG)

/**
 *  图片的压缩方法
 *
 *  @param sourceImg   要被压缩的图片
 *  @param defineWidth 要被压缩的尺寸(宽)
 *
 *  @return 被压缩的图片
 */
+(UIImage *)IMGCompressed:(UIImage *)sourceImg targetWidth:(CGFloat)defineWidth;

@end
