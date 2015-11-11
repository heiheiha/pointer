//
//  main.cpp
//  20141105065
//
//  Created by  黄磊 on 15/11/11.
//  Copyright © 2015年  黄磊. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,*p;
    a=100;
    p=&a;
    printf("1 a=%x   $a=%x   &p=%x   p=%x   *p=%x\n",a,&a,&p,p,*p);
    printf("2 a=%x   $a=%x   &p=%x   p=%x   *p=%x\n",a,&a,&p,p,*p);
    return 0;
}