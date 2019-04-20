//
// Created by daniel on 20.04.19.
//

#ifndef JIMP_EXERCISES_SIMPLEFORWARDLIST_H
#define JIMP_EXERCISES_SIMPLEFORWARDLIST_H

struct ForwardList {
    int value;
    ForwardList* next;
};





ForwardList *CreateNode(int value){
    auto new_node = new ForwardList;
    new_node->value = value;
    new_node->next = nullptr;
    return new_node;
}

void DestroyList(ForwardList *list){

    while(list != nullptr){
        auto next_node = list->next;
        delete list;
        list = next_node;
    }
}



ForwardList* PushFront(ForwardList *list, int value){
    if(list != nullptr){
        auto new_node = CreateNode(value);
        new_node->next = list;
        return new_node;
    } else {
        return nullptr;
    }
}

void Append(ForwardList *list, ForwardList *tail){
    if(list != nullptr) {
        ForwardList *last_node = list;
        while (last_node->next != nullptr) {
            last_node = last_node->next;
        }
        last_node->next = tail;
    }
}





#endif //JIMP_EXERCISES_SIMPLEFORWARDLIST_H
