qtEnv = Environment()

qtEnv['QT5DIR'] = 'C:\\Qt\\Qt5.2.1\\5.2.1\\msvc2012_64_opengl'

qtEnv.Tool('qt5')

qtEnv.EnableQt5Modules([
                      'QtGui',
                      'QtCore',
                      'QtOpenGL',
                      'QtWidgets'
                     ])
myfiles = Glob('*.cpp')
myobjects = qtEnv.Object(myfiles)

qtEnv.Program(target='release\symulator.exe', source=myobjects)


