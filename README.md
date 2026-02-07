#HorseRace OOP
## UML
'''mermaid
class Horse{
    position: int
    index: int
    trackLength: int
    Horse()
    init(int index, int trackLength)
    advance()
    printLane()
    isWinner() bool
}

class Race{
    TRACK_LENGTH: int
    NUM_HORSES: int
    Horse horse[HORSE_NUMBER]
    Race()
}

## Race()

'''
in header
    set const static int NUM_HORSES to 5
    set const int TRACK_LENGTH
in constructor
    go through each horse
    initialize that horse by calling its init

'''

## Race.start()
'''
set bool keepGoing to true
while keepGoing:
    for each horse:
        advance that horse
        print horse lane
        if a horse wins:
            set keepGoing to false
'''

## Horse::Horse()
'''

    set position to zero
    set index to zero
    set track_length to 15
'''

## void Horse::init(int index, int trackLength){
'''

    my index = index
    my trackLength = trackLength
    my position = 0
'''

## void Horse::advance()
'''

    roll a random 0-1 int called coin
    add coin to position
'''

## void Horse::printLane()
'''

    for pos goes from 0 to tack length:
        if position == my position
            print index
        otherwise
            print "."
    print newline
'''

## bool Horse::isWinner
'''

    bool result = false
    if position >= trackLength
        result = true
        print some winning commentary
    return result
'''

