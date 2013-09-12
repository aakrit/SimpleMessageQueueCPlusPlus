//
//  Message.h
//  OODesignClass_HW_2
//
//  Created by Aakrit Prasad on 5/6/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __OODesignClass_HW_2__Message__
#define __OODesignClass_HW_2__Message__

#include <iostream>
namespace mm
{
class Message
{

    std::string message = NULL;
public:
    Message(std::string);
    std::string getMessage();
    void setMessage (std::string);
    
};
}



#endif /* defined(__OODesignClass_HW_2__Message__) */
