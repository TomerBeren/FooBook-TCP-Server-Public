# [AdvancedProgProject]

## Getting Started

This guide will walk you through the steps required to compile and run **[AdvancedProgProject]** using Docker. Follow these instructions to get a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

Before you begin, ensure you have Docker installed on your system. If Docker is not installed, follow the installation instructions for your operating system on the [Docker Official Website](https://docs.docker.com/get-docker/).

### Installation

Clone the repository to your local machine:

```bash
git clone [https://github.com/TomerBeren/AdvancedProgProject]
cd [Your Repository Name]
```
### Build the Docker Image

Build the Docker image using the following command:

```bash
docker build -t advancedprogproject .
```
This command reads the Dockerfile in the current directory and builds an image named advancedprogproject.

### Run the Docker Container

To run the project in a Docker container, execute:

```bash
docker run -it advancedprogproject
```
### Plan B
If for any reason the docker build dosent work you can use our Makefile that we added for this case and run the command:

```bash
make
./my_program
```
