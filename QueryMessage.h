//
//  QueryMessage.h
//  OODesignClass_HW_2
//
//  Created by Aakrit Prasad on 5/6/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __OODesignClass_HW_2__QueryMessage__
#define __OODesignClass_HW_2__QueryMessage__

#include <iostream>
#include "Message.h"

class QueryMessage: public mm::Message
{
public:
    QueryMessage(std::string);
    ~QueryMessage();
    
};



#endif /* defined(__OODesignClass_HW_2__QueryMessage__) */
