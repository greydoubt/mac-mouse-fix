//
// --------------------------------------------------------------------------
// ButtonInputParser.h
// Created for Mac Mouse Fix (https://github.com/noah-nuebling/mac-mouse-fix)
// Created by Noah Nuebling in 2019
// Licensed under MIT
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import "ButtonInputReceiver.h"

@interface ButtonInputParser : NSObject

+ (MFEventPassThroughEvaluation)generateActionTriggersWithInputFrom:(int)button type:(MFButtonInputType)type;

@end

