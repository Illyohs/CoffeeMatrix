/*
 * Copyright 2017 <copyright holder> <email>
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ROOMJOINRULES_H
#define ROOMJOINRULES_H

#include "event.h"

namespace matrix 
{
	namespace event
	{
		enum class Rules { PUBLIC, KNOCK, INVITE, PRIVATE };
		
		class RoomJoinRulesEvent : Event
		{
			public:
				RoomJoinRulesEvent(const Rules rule);
				
				Rules getRule() const;
				
			private:
				Rules _rule;
		};
	}
}

#endif // ROOMJOINRULES_H
