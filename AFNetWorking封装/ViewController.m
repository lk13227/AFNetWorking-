//
//  ViewController.m
//  AFNetWorking封装
//
//  Created by Kai Liu on 16/6/22.
//  Copyright © 2016年 Kai Liu. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [LKNetWorkManager requestWithType:HttpRequestTypeGet withUrlString:@"idservice/id" withParaments:@{@"id":@"420984198704207896"} withSuccessBlock:^(NSDictionary *object) {
        
        LKLog(@"%@",object[@"retData"][@"address"]);
        LKLog(@"%@",object);
        
        
    } withFailureBlock:^(NSError *error) {
        
        
    } progress:^(float progress) {
        
        LKLog(@"%f",progress);
        
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
