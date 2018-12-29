//
//  ZDICollectViewController.h
//  iOS知乎日报
//
//  Created by 涂强尧 on 2018/12/11.
//  Copyright © 2018 涂强尧. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZDICollectView.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZDICollectViewController : UIViewController<UITableViewDelegate>
@property (nonatomic, strong) ZDICollectView *collectView;
@property (nonatomic, strong) NSMutableArray *collectionMutableArray;
@end

NS_ASSUME_NONNULL_END
