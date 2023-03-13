import pygame

# Initialize Pygame
pygame.init()

# Set the window size
screen_width = 800
screen_height = 1000

# Set the window title
pygame.display.set_caption("Mona Lisa")

# Create the window
screen = pygame.display.set_mode((screen_width, screen_height))

# Set the background color
background_color = (255, 255, 255)
screen.fill(background_color)

# Load the Mona Lisa image
mona_lisa_image = pygame.image.load("mona_lisa.jpg")

# Get the image dimensions
image_width = mona_lisa_image.get_width()
image_height = mona_lisa_image.get_height()

# Scale the image to fit the screen
scale_factor = 0.5
scaled_width = int(image_width * scale_factor)
scaled_height = int(image_height * scale_factor)
scaled_image = pygame.transform.scale(mona_lisa_image, (scaled_width, scaled_height))

# Calculate the position of the image on the screen
x_pos = (screen_width - scaled_width) // 2
y_pos = (screen_height - scaled_height) // 2

# Draw the image on the screen
screen.blit(scaled_image, (x_pos, y_pos))

# Update the screen
pygame.display.update()

# Wait for the user to quit
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            quit()
print("y")