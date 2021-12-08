#Synthesizer plays a song

import pgzrun
WIDTH = 800
HEIGHT = 600
#pygame zero has a built in synthesizer that can be used to create tones.
#syntax:
#tone.create(note, duration)
#a note is A-F; either normal, flat(b) or sharp(#); and of octave 0-8.
#duration is time in seconds

tones = []
tones.append( tone.create('A#4', 0.3))
tones.append( tone.create('B#4', 0.3))
tones.append( tone.create('C#4', 0.3))
tones.append( tone.create('D#4', 0.3))
tones.append( tone.create('E#4', 0.3))
tones.append( tone.create('F#4', 0.3))

message = ''
data = ['happy', 'birthday', 'to', 'you']
data_song_sync= [0,0,1,1,2,3]
song = [0,0,1,0,3,2]
index = 0

def draw():
    global message
    screen.fill('pink')
    screen.draw.text(message, pos = (300,100), color = 'black', fontsize = 100)

def play():
    global song, index, message, data, data_song_sync
    tones[song[index]].play()
    message = data[data_song_sync[index]]
    index+=1
    if index == len(song):
        clock.unschedule(play)

clock.schedule_interval(play, 0.4)


pgzrun.go()