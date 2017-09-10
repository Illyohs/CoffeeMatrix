project('CoffeeMatrix', 'cpp', default_options: ['cpp_std=c++11'])

qt5 = import('qt5')
qt5_dep = dependency('qt5', modules: ['Core', 'Gui'])

srcs = [
	'src/main.cpp',
	'src/event/event.cpp',
	'src/event/roomaliasesevent.cpp',
	'src/event/roomcanonicalaliasevent.cpp',
	'src/event/roomcreateevent.cpp',
		]


executable('CoffeeMatrix', srcs, dependencies: qt5_dep)
