//
// Created by Denis Wagner on 5/8/19.
//

#ifndef PERSONAL_ASSISTANT_ECHO_HPP
#define PERSONAL_ASSISTANT_ECHO_HPP

#include "Skill.hpp"

class Echo : public QObject, public Skill
{
Q_OBJECT
    Q_PLUGIN_METADATA( IID
                               "skill/0.1"
                               FILE
                               "Echo.json" )
    Q_INTERFACES( Skill )

    std::map<std::string, std::string> utteranceIntentMap;

public:
    virtual void construct() override;
    virtual const std::map<std::string, std::string>& getSupportedUtterances() override;
    virtual void process( const std::string& utterance, const std::string& intent,
                          const std::map<std::string, std::string>& entities ) override;
};

#endif //PERSONAL_ASSISTANT_ECHO_HPP
