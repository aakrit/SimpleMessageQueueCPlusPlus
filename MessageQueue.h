//
//  MessageQueue.h
//  OODesignClass_HW_2
//
//  Created by Aakrit Prasad on 5/6/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __OODesignClass_HW_2__MessageQueue__
#define __OODesignClass_HW_2__MessageQueue__

#include <iostream>
#include <vector>

namespace mm{
class Message;
}

class MessageQueue
{
    std::string name;
    std::vector<mm::Message> inbox;
public:
    
    bool isEmpty();
    void addMsg(mm::Message);
    void popMsg();
    void list();
    void getListsize();
    void clearList();
    
};





#endif /* defined(__OODesignClass_HW_2__MessageQueue__) */
