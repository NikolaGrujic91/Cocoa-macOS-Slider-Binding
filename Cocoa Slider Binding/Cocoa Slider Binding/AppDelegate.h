//
//  AppDelegate.h
//  Cocoa Slider Binding
//
//  Created by Marina Aleksic on 13/01/2020.
//  Copyright © 2020 Mac Developers. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    NSInteger sliderValue;
}

@property (weak) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSSlider *slider;
@property (weak) IBOutlet NSTextField *label;
@property (weak) IBOutlet NSButton *incrementButton;
@property (weak) IBOutlet NSButton *decrementButton;

- (IBAction)increment:(id)sender;
- (IBAction)decrement:(id)sender;
- (void)sliderValueChanged;
- (void)updateLabel;

@end
