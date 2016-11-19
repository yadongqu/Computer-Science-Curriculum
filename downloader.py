import requests
from lxml import html

r = requests.get('https://people.eecs.berkeley.edu/~jrs/61b/hw/pj1/')
tree = html.fromstring(r.content)



