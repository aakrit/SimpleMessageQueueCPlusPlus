//
//  Message.cpp
//  OODesignClass_HW_2
//
//  Created by Aakrit Prasad on 5/6/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "Message.h"


mm::Message::Message(std::string s): message(s)
{
    ;
}

void mm::Message::setMessage(std::string s)
{
    this->message = s;
}

std::string mm::Message::getMessage()
{
    return this->message;
}