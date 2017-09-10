/*
 * Copyright 2017 Anthony Anderson aantony4122@gmail.com
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

#ifndef ROOMCANONICALALIAS_H
#define ROOMCANONICALALIAS_H

#include "event.h"

#include <QJsonObject>

namespace matrix
{
	namespace event
	{
		class RoomCanonicalAliasEvent
		{
			public:
				RoomCanonicalAliasEvent(const QString alias);
				
				QString getAlias() const;
				
			private:
				QString _alias;
		};
	}
}

#endif // ROOMCANONICALALIAS_H
