/*
 *    Copyright 2017 Anthony Anderson
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#ifndef EVENT_H
#define EVENT_H

#include <QString>
#include <QJsonObject>

namespace matrix
{
    namespace event 
    {
        class Event
        {
            public:
                Event();
				Event(const QJsonObject &json);
				
				QString getEventId() const;
				QString getOriginServerTs() const;
				QString getRoomId() const;
				QString getSender() const;
				QString getStateKey() const;
				QString getType() const;
                
            private:
                QString _event_id;
				QString _origin_server_ts;
				QString _room_id;
				QString _sender;
				QString _state_key;
				QString _type;
            
        
        };
    }
}
#endif // EVENT_H
