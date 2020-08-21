
#ifndef _TAG_H_
#define _TAG_H_

#include <json/value.h>
#include "Person.h"

class Tag
{
    private:
        Person* tag_Person;
        int index;
        std::string comment;

    public:
        Tag() = default;
        Tag(Json::Value);
        Json::Value toJson(); 
        ~Tag();
};

#endif  /* _TAG_H_ */
