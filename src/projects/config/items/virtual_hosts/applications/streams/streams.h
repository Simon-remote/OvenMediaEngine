//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Hyunjun Jang
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include "stream.h"

namespace cfg
{
	namespace vhost
	{
		namespace app
		{
			namespace stream
			{
				struct Streams : public Item
				{
					CFG_DECLARE_REF_GETTER_OF(GetStreamList, _stream_list)

				protected:
					void MakeParseList() override
					{
						RegisterValue<Optional>("Stream", &_stream_list);
					}

					std::vector<Stream> _stream_list;
				};
			}  // namespace stream
		}	   // namespace app
	}		   // namespace vhost
}  // namespace cfg