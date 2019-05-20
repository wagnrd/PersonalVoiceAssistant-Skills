//
// Created by Denis Wagner on 5/19/19.
//

#include "Echo.hpp"

void Echo::construct()
{
    utteranceIntentMap.emplace( "Wiederhole @sentence_to_echo", "echo_intent" );
    utteranceIntentMap.emplace( "@sentence_to_echo", "echo_intent_general" );
}

const std::map<std::string, std::string>& Echo::getSupportedUtterances()
{
    return utteranceIntentMap;
}

void Echo::process( const std::string& utterance, const std::string& intent,
                    const std::map<std::string, std::string>& entities )
{
    std::string sentenceToEcho = entities.find( "@sentence_to_echo" )->second;
    skillManager->sendResponse( "Ich wiederhole aus dem Plugin: " + sentenceToEcho, this );
}
