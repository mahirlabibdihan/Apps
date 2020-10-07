import pygame 
pygame.init()

screen = pygame.display.set_mode((2000,1000))

pygame.display.set_caption("Paint")

screen.fill((255,255,255))
pygame.display.update()

x,y=0,0
M=E=False
color=(0,0,0)
while True:
	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			pygame.quit() 

		if event.type == pygame.MOUSEBUTTONDOWN:
			if event.button == 1: M=True
			if event.button == 3: E= True				
		elif event.type == pygame.MOUSEBUTTONUP:
			M=E=False

		if event.type == pygame.KEYDOWN:
			if event.key == pygame.K_r: color=(204,0,0)
			if event.key == pygame.K_b: color=(0,0,0)
			if event.key == pygame.K_y: color=(255,255,0)
			if event.key == pygame.K_g: color=(0,255,0)
			if event.key == pygame.K_o: color=(255,128,0)
			if event.key == pygame.K_w: color=(255,255,255)
			if event.key == pygame.K_p: color=(204,0,204)
			if event.key == pygame.K_SPACE: 
				screen.fill((255,255,255))
				color=(0,0,0)
	x, y = pygame.mouse.get_pos()
	if M:
		pygame.draw.circle(screen, color, (x, y),10)
	elif E:
		pygame.draw.circle(screen, (255,255,255), (x, y),10)

	pygame.display.update()
 
	
