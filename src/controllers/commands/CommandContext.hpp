// SPDX-FileCopyrightText: 2022 Contributors to Chatterino <https://chatterino.com>
//
// SPDX-License-Identifier: MIT

#pragma once

#include <QStringList>

#include <memory>

namespace chatterino {

class Channel;
using ChannelPtr = std::shared_ptr<Channel>;
class TwitchChannel;
class Split;

struct CommandContext {
    QStringList words;

    // Can be null
    ChannelPtr channel;

    // Can be null if `channel` is null or if `channel` is not a Twitch channel
    TwitchChannel *twitchChannel;

    // Can be null if the command was not executed from a split
    Split *split{};
};

}  // namespace chatterino
