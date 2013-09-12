//
//  ReplyMessage.h
//  OODesignClass_HW_2
//
//  Created by Aakrit Prasad on 5/6/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __OODesignClass_HW_2__ReplyMessage__
#define __OODesignClass_HW_2__ReplyMessage__

#include <iostream>
#include "Message.h"

class ReplyMessage: public mm::Message
{
public:
    ReplyMessage(std::string);
    ~ReplyMessage();
    
};


#endif /* defined(__OODesignClass_HW_2__ReplyMessage__) */
