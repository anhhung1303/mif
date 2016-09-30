#ifndef __MIF_NET_CLIENTS_FRAME_WRITER_H__
#define __MIF_NET_CLIENTS_FRAME_WRITER_H__

// STD
#include <memory>

// MIF
#include "mif/net/client.h"

namespace Mif
{
    namespace Net
    {
        namespace Clients
        {

            class FrameWriter final
                : public Net::Client
            {
            public:
                FrameWriter(std::weak_ptr<IControl> control, std::weak_ptr<IPublisher> publisher);

            private:
                // Client
                virtual void ProcessData(Common::Buffer buffer) override final;
            };

        }   // namespace Clients
    }   // namespace Net
}   // namespace Mif

#endif  // !__MIF_NET_CLIENTS_FRAME_WRITER_H__