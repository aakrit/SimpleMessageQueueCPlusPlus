//
//  main.cpp
//  OODesignClass_HW_2
//
//  Created by Aakrit Prasad on 5/5/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include <iostream>
#include "MessageQueue.h"
#include "QueryMessage.h"
#include "ReplyMessage.h"

int main(int argc, const char * argv[])
{
    std::unique_ptr<MessageQueue> m (new MessageQueue());
    std::unique_ptr<QueryMessage> q (new QueryMessage("Adding the 1st message"));
    m->addMsg(*q);
    std::unique_ptr<mm::Message> r (new ReplyMessage("2nd message"));
    std::unique_ptr<ReplyMessage> rp (new ReplyMessage("new 3rd message"));
    m->addMsg(*r);
    m->addMsg(*rp);

    m->getListsize();
    m->popMsg();
    m->list();
    m->getListsize();
    m->popMsg();
    m->list();
    m->popMsg();
    m->getListsize();
    m->popMsg();
    m->clearList();
    
    
    
    return 0;
}

