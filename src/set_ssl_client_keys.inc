	assert(self);
	assert(self->dealer);
	assert(self->args->privkey);
	assert(self->args->pubkey);
	assert(self->args->serverkey);
	assert(zsys_has_curve());
	zsock_set_curve_secretkey(self->dealer, self->args->privkey);
	zsock_set_curve_publickey(self->dealer, self->args->pubkey);
	zsock_set_curve_serverkey(self->dealer, self->args->serverkey);
	zstr_free(&self->args->privkey);
	zstr_free(&self->args->pubkey);
	zstr_free(&self->args->serverkey);