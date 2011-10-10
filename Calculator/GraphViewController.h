//
//  GraphViewController.h
//  Calculator
//
//  Created by Enrique S. Naudon on 10/9/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GraphView.h"

@interface GraphViewController : UIViewController <GraphViewDelegate> {
  
@private
	IBOutlet GraphView *graph;
  
@public
  NSArray *points;
}

//private properties
@property (retain) IBOutlet GraphView *graph;

//public properties
@property (nonatomic, retain) NSArray *points;

@end
