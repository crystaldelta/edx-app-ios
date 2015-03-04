//
//  OEXRegistrationFieldValidation.h
//  edXVideoLocker
//
//  Created by Jotiram Bhagat on 03/03/15.
//  Copyright (c) 2015 edX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OEXRegistrationFormField.h"
@interface OEXRegistrationFieldValidator : NSObject
+(NSString *)validateField:(OEXRegistrationFormField *)field withText:(NSString *)currentValue;
@end
