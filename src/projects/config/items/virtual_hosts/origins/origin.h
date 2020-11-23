//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Hyunjun Jang
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include "pass.h"

namespace cfg
{
	namespace vhost
	{
		namespace orgn
		{
			struct Origin : public Item
			{
				CFG_DECLARE_REF_GETTER_OF(GetLocation, _location)
				CFG_DECLARE_REF_GETTER_OF(GetPass, _pass)

			protected:
				void MakeParseList() override
				{
					RegisterValue("Location", &_location);
					RegisterValue("Pass", &_pass);
				}

				ov::String _location;
				Pass _pass;
			};
		}  // namespace orgn
	}	   // namespace vhost
}  // namespace cfg