//
//  TypesetKit+Match.h
//  Typeset
//
//  Created by Draveness on 16/4/18.
//  Copyright © 2016年 DeltaX. All rights reserved.
//

#import <Typeset/Typeset.h>

@interface TypesetKit (Match)

- (TypesetUIntegerBlock)from;
- (TypesetUIntegerBlock)to;
- (TypesetUIntegerBlock)location;
- (TypesetUIntegerBlock)length;
- (TypesetRangeBlock)range;
- (TypesetStringBlock)match;
- (TypesetMatchBlock)matchWithOptions;
- (TypesetStringBlock)matchAll;
- (TypesetMatchBlock)matchAllWithOptions;

- (TypesetStringBlock)matchAllWithPattern;
- (TypesetBlock(NSString *, NSRegularExpressionOptions))matchAllWithPatternAndOptions;

- (TypesetKit *)number;
- (TypesetKit *)numbers;
- (TypesetKit *)letters;

- (TypesetKit *)all;

@end
